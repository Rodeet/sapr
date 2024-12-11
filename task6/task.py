import json


def phasification(temps, x):
    phases = {}
    for temp in temps["температура"]:
        for i in range(len(temp["points"])):
            if x <= temp["points"][i][0]:
                if i == 0:
                    phases[temp["id"]] = temp["points"][i][1]
                else:
                    phase = (x - temp["points"][i-1][0])*(temp["points"][i][1] - temp["points"][i-1][1])/(temp["points"][i][0] - temp["points"][i-1][0]) + temp["points"][i-1][1]
                    phases[temp["id"]] = phase
                break
    return phases


def activation_levels(heating_levels, rules, phases):
    dephases = []
    for level in heating_levels["температура"]:
        new_points = []
        phase_id = ""
        for rule in rules:
            if rule[1] == level["id"]:
                phase_id = rule[0]
                break
        for i in range(1, len(level["points"]), 2):
            value = (phases[phase_id] - level["points"][i - 1][1]) * (
                        level["points"][i][0] - level["points"][i - 1][0]) / (
                                level["points"][i][1] - level["points"][i - 1][1]) + level["points"][i - 1][0]
            if level["points"][i - 1][0] <= value < level["points"][i][0]:
                new_points.append([value, phases[phase_id]])
        dephases.append(new_points)
    return dephases


def dephasification(dephases):
    max_value = 0
    value = 0
    for dephase in dephases:
        for point in dephase:
            if point[1] > max_value:
                max_value = point[1]
                value = point[0]
    return value


def main(temperature, heating_level, rule, x):
    temperature = json.loads(temperature)
    heating_level = json.loads(heating_level)
    rule = json.loads(rule)
    phases = phasification(temperature, x)
    dephases = activation_levels(heating_level, rule, phases)
    value = dephasification(dephases)
    return value


if __name__ == "__main__":
    json_data_1 = '''
    {
      "температура": [
          {
          "id": "холодно",
          "points": [
              [0,1],
              [18,1],
              [22,0],
              [50,0]
          ]
          },
          {
          "id": "комфортно",
          "points": [
              [18,0],
              [22,1],
              [24,1],
              [26,0]
          ]
          },
          {
          "id": "жарко",
          "points": [
              [0,0],
              [24,0],
              [26,1],
              [50,1]
          ]
          }
        ]
    }
    '''
    json_data_2 = '''
    {
      "температура": [
          {
            "id": "слабый",
            "points": [
                [0,0],
                [0,1],
                [5,1],
                [8,0]
            ]
          },
          {
            "id": "умеренный",
            "points": [
                [5,0],
                [8,1],
                [13,1],
                [16,0]
            ]
          },
          {
            "id": "интенсивный",
            "points": [
                [13,0],
                [18,1],
                [23,1],
                [26,0]
            ]
          }
        ]
    }
    '''
    json_data_3 = '''[
        ["холодно", "интенсивный"],
        ["комфортно", "умеренный"],
        ["жарко", "слабый"]] 
    '''

    el = 19
    level = main(json_data_1, json_data_2, json_data_3, el)
    print(level)
