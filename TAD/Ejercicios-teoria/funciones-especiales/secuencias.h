int fibonacci(int p_numero)
{
    if (p_numero == 0)
    {
        return 0;
    }
    else if (p_numero == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(p_numero - 2) + fibonacci(p_numero - 1);
    }
}

int factorial(int p_numero)
{
    if (p_numero == 0)
    {
        return 1;
    }
    else
    {
        return p_numero * factorial(p_numero - 1);
    }
}