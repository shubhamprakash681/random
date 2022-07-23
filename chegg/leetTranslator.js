function speakLeet(str) {
	var leetCode = {
		A: "@",
		B: '8',
		C: '(',
		D: '|)',
		E: '3',
		F: 'ph',
		G: 'g',
		H: '#',
		I: 'l',
		J: '_|',
		K: '|<',
		L: '1', 
		M: '|\'|\'|',
		N: '/|/',
		O: '0', 
		P: '|D',
		Q: '(,)',
		R: '|2',
		S: '5',
		T: '+',
		U: '|_|',
		V: '|/',
		W: '|/|/',
		X: '><',
		Y: 'j',
		Z: '2'
	}
	
	var translatedStr = "";

	for (i = 0; i < str.length; i++) {
		translatedStr += leetCode[str.charAt(i).toUpperCase()];
		}

	return translatedStr;
}

console.log(speakLeet("FullStack"));