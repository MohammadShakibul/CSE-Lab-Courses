def longest_common_prefix(strings):
    if not strings:
        return ""
    
    prefix = strings[0]
    
    for string in strings[1:]:
        while string.find(prefix) != 0:
            prefix = prefix[:-1]
    
    return prefix
input_strings = ["flower", "flour", "flow"]
output = longest_common_prefix(input_strings)
print("Longest common prefix:", output)
