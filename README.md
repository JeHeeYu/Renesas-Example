# Renesas-Example

## Example Code Location

Path : src/hal_entry.c

```
void hal_entry(void)
{
    /* TODO: add your own code here */

#if BSP_TZ_SECURE_BUILD
    /* Enter non-secure code */
    R_BSP_NonSecureEnter();
#endif
}
```
