string WhoCanWin(int mov1, int mov2, int d) {
		if (d > mov1) {
			if (mov2 >mov1) {
				if (mov2 >2*mov1) return "Liss";
				else return "Draw";
			}
			else if (mov1 >mov2 ) {
			    if (mov1 >2*mov2) return "Ciel";
			    else return "Draw";
				
			}
			else if (mov1 == mov2) {
			    return "Draw";
			}
		}
		else {
			
				return "Ciel";
			
			
		}
		
	}