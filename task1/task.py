import json


def parse_tree(raw_data):
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


def get_all_objects(adj):
    objects = set()
    for a in adj:
        objects.add(a[0])
        objects.add(a[1])
    return sorted(objects)


def get_all_parents(adj, obj):
    parents = []
    current_object = obj
    for a in adj:
        if a[1] == current_object:
            parents.append(a[0])
            current_object = a[0]
    return parents


def get_all_siblings(adj, obj):
    siblings = []
    parent = None
    for a in adj:
        if a[1] == obj:
            parent = a[0]
            break
    for a in adj:
        if a[0] == parent and a[1] != obj:
            siblings.append(a[1])
    return siblings


def task(json_data):
    adjacency = parse_tree(json_data)
    objects_set = get_all_objects(adjacency)
    answer = []
    for obj in objects_set:
        answer.append([get_all_parents(adjacency, obj), get_all_siblings(adjacency, obj)])
    return answer


if __name__ == "__main__":
    ans = task('{"1": {"2": {"3": {"4": null,"5": null},"6": {"7": null,"8": null}}}}')
    print(ans)
