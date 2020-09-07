class Area {

	double len, bre;

	void setDim(double l, double b) {
		this.len = l;
		this.bre = b;	
		System.out.println("Area is :  "+getArea());
	}
	double getArea() {
		return (len * bre);	
	}

	public static void main(String args[]) {
		double length = Double.parseDouble(args[0]);
		double breadth = Double.parseDouble(args[1]);
		Area obj = new Area();
		obj.setDim(length, breadth);
	}
}