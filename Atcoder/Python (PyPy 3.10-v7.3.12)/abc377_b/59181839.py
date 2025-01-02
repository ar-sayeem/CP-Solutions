def solve_max_ball_pairs(balls):
    color_counts = {}
    for color in balls:
        if color in color_counts:
            color_counts[color] += 1
        else:
            color_counts[color] = 1
    
    total_pairs = 0
    for count in color_counts.values():
        pairs = count // 2
        total_pairs += pairs
    
    return total_pairs

def main():
    A1, A2, A3, A4 = map(int, input().strip().split())
    balls = [A1, A2, A3, A4]
    result = solve_max_ball_pairs(balls)
    print(result)

if __name__ == "__main__":
    main()