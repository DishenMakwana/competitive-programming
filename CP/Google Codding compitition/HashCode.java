import java.util.*;
import java.io.*;

class Car {
    LinkedList<Integer> streetsId;

    void print() {
        for (Integer x : streetsId) {
            System.out.println(x + " ");
        }
//        System.out.println();
    }
}

class Street {
    int id;
    int start;
    int end;
    int time;
    string name;

    public Street(int id, int start, int end, int time, string name) {
        this.id = id;
        this.start = start;
        this.end = end;
        this.time = time;
        this.name = name;
    }

    void print() {
        System.out.println(id + " " + start + " " + end + " " + time + " " + name);
    }
}

class Intersection{
    HashMap<Integer,Integer> streetToCount;
}

class ScheduleDetails{
    string s;
    int x;

    public ScheduleDetails(string s, int x) {
        this.s = s;
        this.x = x;
    }
}

class Schedule{
    int id;
}

public class HashCode {

    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(
                    new FileReader("./input/a.txt"));

            PrintWriter pw = new PrintWriter(new
                    BufferedWriter(new FileWriter("./output/a.txt")));

            String[] arr = br.readLine().split(" ");
            int[] array = Arrays.stream(arr).mapToInt(Integer::parseInt).toArray();

            int D=array[0], I=array[1], S=array[2], V=array[3], F=array[4];

            HashMap<String,Integer> streetNameToId = new HashMap<>();
            LinkedList<Street> streets = new LinkedList<>();
            LinkedList<Car> cars= new LinkedList<>();

            ArrayList<Car> carData = new ArrayList<Car>();

            for (int i = 0; i < S; i++) {
                String temp[] = br.readLine().split(" ");

                int B = Integer.parseInt(temp[0]);
                int E = Integer.parseInt(temp[1]);
                int timeTaken = Integer.parseInt(temp[3]);

                Street(i,B,E,timeTaken,temp[2]);
            }

            for (int i = 0; i < V; i++) {
                String temp[] = br.readLine().split(" ");
                int p = Integer.parseInt(temp[0]);

                Car car = new Car();

                for(int i=0;i<p;i++)
                {
                    int streetId = streetNameToId[temp[i+1]];
                    car.streetsId.add(streetId);
                }
                cars.add(car);
            }

            LinkedList<Intersection> intersections = new LinkedList<>(I);
            for(Car car:cars)
            {
                for(int streetId:car.streetsId)
                {
                    Intersection[streets[streetId].addLast].streetToCount[streetId]++;
                }
            }

            LinkedList<Schedule> result;
            for(int i=0;i<intersections.length();i++)
            {
                if(intersections[i].streetToCount.size()==0)
                {
                    continue;
                }

                Schedule s = new Schedule();
                s.id = i;

                int totalNumberOfCars = 0;
                int secondInCycle = intersections[i].streetToCount.size();

                for(Object streetToCount:intersections[i].streetToCount)
                {
                    totalNumberOfCars += streetsToCount;            ////////////////////////////////
                }
            }

        } catch (
                Exception e) {
            e.printStackTrace();
        }
        br.close();
        pw.close();
    }
}