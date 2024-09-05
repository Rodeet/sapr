import json


def parse_json(raw_data):
    data = json.loads(raw_data)

    def recursion(d, parent=None):
        nonlocal response
        for key in d.keys():
            if d[key] is not None:
                recursion(d[key], key)
            if parent is not None:
                response.append((parent, key))
    response = []
    recursion(data)
    return response


if __name__ == "__main__":
    json_data = '{"1": {"2": {"3": {"4": null,"5": null},"6": {"7": null,"8": null}}}}'
    resp = parse_json(json_data)
    print(resp)
