#include "padding.h"

String padd_string(String text, int change, int length) {
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
	if (length>0) {
		if (m_text.length() < length){
			for (int i=m_text.length(); i < length; i++){
				m_text = "0"+m_text;
			}
		}
	}
	return m_text;
}

