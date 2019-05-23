
# Summary
In this kata, you have to make a function named `uglify_word`. It accepts a string parameter.


# What does the uglify_word do?
It checks the char in the given string from the front with an iteration, in the iteration it does these
1. If a flag variable has not been initialized yet. Then it inits a flag variable with value `1`.
2. Check the current char in the iteration,
	- If it is an alphabet character `[a-zA-Z]` and the flag value is equal to `1`, then change this character to upper case if it is a lower case and then set the flag value to `0`.
	- If it is an alphabet character `[a-zA-Z]` and the flag value is equal to `0`, then change this character to lower case if it is an upper case and then set the flag value to `1`.
	- Otherwise, if it is not an alphabet character, then set the flag value to `1`.
3. Return the fixed string that might have already been changed by iteration.


# Examples
```
uglify_word("aaa") === "AaA"
uglify_word("AAA") === "AaA"
uglify_word("BbB") === "BbB"
uglify_word("aaa-bbb-ccc") === "AaA-BbB-CcC"
uglify_word("AaA-BbB-CcC") === "AaA-BbB-CcC"
uglify_word("eeee-ffff-gggg") === "EeEe-FfFf-GgGg"
uglify_word("EeEe-FfFf-GgGg") === "EeEe-FfFf-GgGg"
uglify_word("qwe123asdf456zxc") === "QwE123AsDf456ZxC"
uglify_word("Hello World") === "HeLlO WoRlD"
```

