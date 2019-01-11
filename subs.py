def lengthOfLongestSubstring(s):
    """
    :type s: str
    :rtype: int
    """
    char_map = {}
    front = 0
    back = 0
    answer = 0
    for c in s:
        if c in char_map:
            front = max(char_map[c], front)
        answer = max(answer, back - front + 1)
        char_map[c] = back + 1
        back += 1
    return answer

if __name__ == "__main__":
    print lengthOfLongestSubstring("pwwkew")
