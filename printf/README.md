# Renesas printf Example

## Pin Configuration

![image](https://github.com/JeHeeYu/Renesas-Example/assets/87363461/c42e8bad-cb5a-4ff4-a931-5848d9ce6cfa)


## Stacks

Need to add UART Stack
<br>
<br>
New Stack - Connectivity - UART (r_sci_uart)

![image](https://github.com/JeHeeYu/Renesas-Example/assets/87363461/e85a0230-0fd0-4b2e-818b-133883bb3a6c)

## UART Properties

![image](https://github.com/JeHeeYu/Renesas-Example/assets/87363461/f8fc5c4b-1a50-4e4e-b741-b5e4624c2f36)

## C Linker Flag

Need to add to C Linker Flag
<br>
<br>
Project - Properties - C/C++ Build - Tool Settings - GNU Arm Cross C Linker - Miscellaneous - Other linker flags

```
--specs=rdimon.specs
```

![image](https://github.com/JeHeeYu/Renesas-Example/assets/87363461/cfcd0f75-118c-4e44-8c1e-64f58ea88745)


## Test Result

![image](https://github.com/JeHeeYu/Renesas-Example/assets/87363461/8fd3dd95-560d-4f14-9f8e-b1b96570204e)
