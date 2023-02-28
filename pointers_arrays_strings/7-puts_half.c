lf(char *str)
{
int len, n, i;

len = 0;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
puts2(str[i]);
}
}
else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
puts2(str[n + 1]);
}
}
puts2('\n');
}
