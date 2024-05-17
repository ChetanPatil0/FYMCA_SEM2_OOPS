public class assignment7 {
    public static void main(String[] args) {
        CricketPlayer cricketPlayer = new CricketPlayer("Virat Kohli", 32, "Batsman");
        FootballPlayer footballPlayer = new FootballPlayer("Lionel Messi", 34, "Forward");
        HockeyPlayer hockeyPlayer = new HockeyPlayer("Manpreet Singh", 29, "India");

        System.out.println("Cricket Player Info:");
        cricketPlayer.displayInfo();
        System.out.println();

        System.out.println("Football Player Info:");
        footballPlayer.displayInfo();
        System.out.println();

        System.out.println("Hockey Player Info:");
        hockeyPlayer.displayInfo();
    }
}

class Player {
    private String name;
    private int age;
    
    public Player(String name, int age) {
        this.name = name;
        this.age = age;
    }
    
    public String getName() {
        return name;
    }
    
    public int getAge() {
        return age;
    }
    
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class CricketPlayer extends Player {
    private String role;
    
    public CricketPlayer(String name, int age, String role) {
        super(name, age);
        this.role = role;
    }
    
    public String getRole() {
        return role;
    }
    
    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Role: " + role);
    }
}

class FootballPlayer extends Player {
    private String position;
    
    public FootballPlayer(String name, int age, String position) {
        super(name, age);
        this.position = position;
    }
    
    public String getPosition() {
        return position;
    }
    
    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Position: " + position);
    }
}

class HockeyPlayer extends Player {
    private String team;
    
    public HockeyPlayer(String name, int age, String team) {
        super(name, age);
        this.team = team;
    }
    
    public String getTeam() {
        return team;
    }
    
    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Team: " + team);
    }
}
