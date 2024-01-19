# Renesas 1Sec Timer Example

## Pin Configuration

![image](https://github.com/JeHeeYu/Renesas-Example/assets/87363461/c42e8bad-cb5a-4ff4-a931-5848d9ce6cfa)

## Stacks

Need to add Timer Stack
<br>
<br>
New Stack - Timers - Timer, Low-Power (r_agt)

![image](https://github.com/JeHeeYu/Renesas-Example/assets/87363461/0440f85b-4619-47f0-9cfe-e79d66cccd42)

## Timer Properties

Need to add callback function name

![image](https://github.com/JeHeeYu/Renesas-Example/assets/87363461/21ba61f7-c032-4276-9c40-463ca47b9401)

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

![image](https://github.com/JeHeeYu/Renesas-Example/assets/87363461/919560ca-6c23-4c9b-9469-9882edc5d1c2)
