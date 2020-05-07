struct values
{
	float num1;
	float num2;
	char operation;
};


program compute
{
	version compute_vers
	{
	float ADD (values) = 1;
	float SUB (values) = 2;
	float MUl (values) = 3;
	float DIV (values) = 4;
	} = 1;
} = 123456789;