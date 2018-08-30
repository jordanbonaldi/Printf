/*
** my_strcpy.c for my_strcpy in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 08:44:26 2016 Bonaldi Jordan
** Last update Thu Oct 20 10:05:57 2016 Bonaldi Jordan
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i += 1;
    }
  return (dest);
}
