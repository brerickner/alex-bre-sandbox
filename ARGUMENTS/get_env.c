har *_getenv(char *name)
{
	char *env_val = NULL;
	char *name_cpy;
	unsigned int i = 0; len = 0;
	char *tkn = NULL;
	while name[len] != \0)
	len++;
name_cpy = malloc ((sizeof(char) * len) + 1);
if(!name_cpy)
        return (NULL);
_strcpy (name_cpy, name, len);
env_val = strktok_r(eniron[i], "=", &tkn)
	while(environ[i])
	{
		printf("env_val %s\n, env_val);
    printf("i: %d\n", i)
    if (_strcmp(env_val, name_cpy)
    {
          printf("env_val %s\n, env_val);
		env_val = strktok_r(NULL, "\n", &tkn);
		printf("env_val %s \n," env_val);
		free(name_cpy);
		return (env_val);
	}
	++i;
env_val = strktok_r(environ[i], "=", &tkn);
}
free(name_cpy);
return(NULL);
}
}
