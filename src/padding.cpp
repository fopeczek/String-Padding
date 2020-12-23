#include "padding.h"

String Padder::padd_string(String text, int change) {
	String m_text = text;
	if (change > 0) {
		for (int i=1; i <= change; i++){
			m_text = "0"+m_text;
		}
	} else if (change < 0) {
		for (int i=-1; i >= change; i--){
			m_text = m_text+"0";
		}
	}
	return m_text;
}
