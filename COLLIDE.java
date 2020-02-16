import java.util.*;

public class Main {
	static Scanner sc = new Scanner(System.in);
	static final String DIRS = "UDLR";
	static final int[] dx = new int[] { 0, 0, -1, +1 };
	static final int[] dy = new int[] { +1, -1, 0, 0 };
	public static void main(String[] args) {
		int T = sc.nextInt();
		while(T-->0) {
			int x = sc.nextInt(), y = sc.nextInt();
			int dir = DIRS.indexOf(sc.next().charAt(0));
			
			double best = 1e9;
			int N = sc.nextInt();
			while(N-->0) {
				int xa = sc.nextInt(), ya = sc.nextInt();
				int dira = DIRS.indexOf(sc.next().charAt(0));				
				if(dir == dira)
					continue;
				
				if(dx[dir]==dx[dira]) {
					if(x!=xa)
						continue;
					double time = (double)(y - ya)/(dy[dira] - dy[dir]);
					if(time >= 0)
						best = Math.min(best, time);
				} else if(dy[dir]==dy[dira]) {
					if(y!=ya)
						continue;
					double time = (double)(x - xa)/(dx[dira] - dx[dir]);
					if(time >= 0)
						best = Math.min(best, time);
				} else {
					int time = dx[dir]!=0 ? (xa - x)/dx[dir] : (ya - y)/dy[dir];
					int timea = dx[dira]!=0 ? (x - xa)/dx[dira] : (y - ya)/dy[dira];
					if(time==timea && time >=0)
						best = Math.min(best, time);
				}
			}
			System.out.println(best == 1e9 ? "SAFE" : "" + best);
		}
	}
}
