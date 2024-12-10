import json
import numpy as np


def range_matrix(array):
    matrix = []
    all_elements = []
    for item in range(len(array)):
        if isinstance(array[item], list):
            for i in array[item]:
                all_elements.append((item+1, i))
        else:
            all_elements.append((item+1, array[item]))
    sorted_array = sorted(all_elements, key=lambda x: x[1])
    for item in sorted_array:
        row = []
        for i in sorted_array:
            if item[0] <= i[0]:
                row.append(1)
            else:
                row.append(0)
        matrix.append(row)
    return matrix


def main(json1, json2):
    a = json.loads(json1)
    b = json.loads(json2)
    matrix_a = np.array(range_matrix(a))
    matrix_b = np.array(range_matrix(b))
    t_a = matrix_a.transpose()
    t_b = matrix_b.transpose()
    y_a_b = matrix_a * matrix_b
    y_t_a_b = t_a * t_b
    k = y_a_b + y_t_a_b
    conflict_core = []
    for i in range(len(k)):
        row = []
        for j in range(i, len(k[i])):
            if k[i][j] == 0:
                if not row:
                    row.append(i+1)
                row.append(j+1)
        if row:
            conflict_core.append(row)
    return conflict_core


if __name__ == "__main__":
    json_string_1 = '''[1,[2,3],4,[5,6,7],8,9,10]'''
    json_string_2 = '''[[1,2],[3,4,5],6,7,9,[8,10]]'''
    result = main(json_string_1, json_string_2)
    print(result)
