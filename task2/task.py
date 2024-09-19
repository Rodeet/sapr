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


def count_direct_parents(adj, obj):
    counter = 0
    for a in adj:
        if a[1] == obj:
            counter += 1
    return counter


def count_direct_children(adj, obj):
    counter = 0
    for a in adj:
        if a[0] == obj:
            counter += 1
    return counter


def count_indirect_parents(adj, obj):
    direct_parents = []
    counter = 0
    for a in adj:
        if a[1] == obj:
            direct_parents.append(a[0])
    for direct_parent in direct_parents:
        current_object = direct_parent
        for a in adj:
            if a[1] == current_object:
                counter += 1
                current_object = a[0]
    return counter


def count_indirect_children(adj, obj):
    direct_children = []
    counter = 0
    for a in adj:
        if a[0] == obj:
            direct_children.append(a[1])
    for direct_child in direct_children:
        next_children = [direct_child]
        while True:
            new_next_children = []
            for a in adj:
                if a[0] in next_children:
                    counter += 1
                    new_next_children.append(a[1])
            if len(new_next_children) == 0:
                break
            next_children = new_next_children
    return counter


def count_siblings(adj, obj):
    direct_parents = []
    counter = 0
    for a in adj:
        if a[1] == obj:
            direct_parents.append(a[0])
    for direct_parent in direct_parents:
        for a in adj:
            if a[0] == direct_parent and a[1] != obj:
                counter += 1
    return counter


def task(json_data):
    adjacency = parse_tree(json_data)
    objects_set = get_all_objects(adjacency)
    all_dependencies = []
    for obj in objects_set:
        dependencies = [count_direct_children(adjacency, obj), count_direct_parents(adjacency, obj),
                        count_indirect_parents(adjacency, obj), count_indirect_children(adjacency, obj),
                        count_siblings(adjacency, obj)]
        all_dependencies.append(dependencies)
    return all_dependencies


if __name__ == "__main__":
    deps = task('{"1": {"2": {"3": {"4": null,"5": null},"6": {"7": null,"8": null}}}}')
    print(deps)
