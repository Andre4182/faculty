















class Remorca 
{
	private int nrC;
	private String nrI;
	private static int ultc;
	
	public Remorca(int c,String i)
	{
		nrC=c;
		nrI=i;
		ultc=nrC;
	}
	
	public Remorca(String i)
	{
		nrI=i;
		if(ultc==0)
			{nrC=10;}
		else
			{nrC=1+ultc;}
		ultc=nrC;
	}

	public String toString()
	{
		return nrC+","+nrI;
	}
	
	public int getnrCutii()
	{
		return nrC;
	}
	
	public String getnrInmatriculare()
	{
		return nrI;
	}


}







