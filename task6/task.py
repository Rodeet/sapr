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


def activation_levels():
    pass


def dephasification():
    pass


def main(temperature, heating_level, rule, x):
    temperature = json.loads(temperature)
    heating_level = json.loads(heating_level)
    rule = json.loads(rule)
    phases = phasification(temperature, x)
    print(phases)
    pass


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
        ["холодно", "интенсивно"],
        ["нормально", "умеренно"],
        ["жарко", "слабо"]] 
    '''

    el = 19
    main(json_data_1, json_data_2, json_data_3, el)
