from task2.task import task
import math


def calculate_h(row, total_elements):
    h = 0
    for item in row:
        if item != 0:
            probability = item / (total_elements - 1)
            h -= probability * math.log(probability, 2)
    return h


def main(json_data):
    deps = task(json_data)

    sum_h = 0
    length = len(deps)
    for dep in deps:
        sum_h += calculate_h(dep, length)

    return sum_h


if __name__ == "__main__":
    ans = main('{"1": {"2": {"3": {"5": null,"6": null},"4": {"7": null,"8": null}}}}')

    print(ans)

