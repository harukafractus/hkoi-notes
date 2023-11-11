// Copyright (c) 2022 ivantam04.

// This work is licensed under the terms of the MIT license.  
// For a copy, see <https://opensource.org/licenses/MIT>.

// Demo program for "An introduction to OOP"
// "What does the motor vehicles speak?"

class car {
	private int model_year;
	private int model_docker;
	private String model_sound;

	public void get_sound(){
		System.out.println("Sound is "+ model_sound);
	}
	public void set_sound(String sound){
		model_sound = sound;
	}

	public void get_docker(){
		System.out.println("Sound is "+ model_docker);
	}
	public void set_docker(int docker){
		model_docker = docker;
	}
	
	public static void main(String[] args){
		car bus1 = new car();
		car ambulance = new car();
		bus1.set_sound("UHHHHH");
		bus1.get_sound();
		ambulance.set_sound("beeeebuubeeebuuu");
		ambulance.get_sound();
	}
}