import math


def calculate_h(row):
    h = 0
    for item in row:
        if item != 0:
            h -= item * math.log(item, 2)
    return h


def main():
    matrix = [[1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
              [0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
              [0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
              [0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
              [0, 0, 0, 0, 0, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
              [0, 0, 0, 0, 2, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0],
              [0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 1, 0, 0, 0, 0, 0, 0],
              [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0],
              [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0],
              [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0],
              [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1]]
    total_sum = 0
    for i in matrix:
        for j in i:
            total_sum += j

    probability_matrix = []
    for i in matrix:
        row = []
        for j in i:
            row.append(j / total_sum)
        probability_matrix.append(row)

    a_sums = [sum(i) for i in probability_matrix]
    h_a = calculate_h(a_sums)

    b_sums = []
    for column in range(len(probability_matrix[0])):
        column_sum = 0
        for col in probability_matrix:
            column_sum += col[column]
        b_sums.append(column_sum)
    h_b = calculate_h(b_sums)

    matrix_to_list = []
    for i in probability_matrix:
        for j in i:
            matrix_to_list.append(j)
    h_ab = calculate_h(matrix_to_list)

    h_b_a = h_ab - h_a
    i_ab = h_b - h_b_a

    h_s = [round(x, 2) for x in [h_ab, h_a, h_b, h_b_a, i_ab]]
    return h_s


if __name__ == "__main__":
    result = main()
    print(result)
