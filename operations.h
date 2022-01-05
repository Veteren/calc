#define add(x) m_add(x, 0)
#define subtract(x) m_subtract(x, atoi(*x++))
#define multiply(x) m_multiply(x, 1)
#define divide(x) m_divide(x, atoi(*x++))

int m_add(char **args, int result)
{  
  if (*args != NULL) {
	if (*args !=0) {
	  //printf("%d\n",atoi(*args++));
	  result += atoi(*args++);
	}
	m_add(args, result);
	
  } else {
	return result;
  }	
}

int m_subtract(char **args, int result)
{
  if (*args != NULL) {
    if (*args !=0) {
	  result -= atoi(*args++);
	}
	m_subtract(args, result);
	
  } else {
	return result;
  }
}

int m_multiply(char **args, int result)
{
  if (*args != NULL) {
	if (*args !=0) {
	  result *= atoi(*args++);
	}
	m_multiply(args, result);
	
  } else {
	return result;
  }
}

float m_divide(char **args, float result)
{
  if (*args != NULL) {
    if (*args != 0) {
	  result /= atoi(*args++);
	}
	m_divide(args, result);
	
  } else {
	return result;
  }
}
