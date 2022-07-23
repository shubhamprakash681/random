const leetTranslator = (string) => {
    const leetCodex = {
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
    };

    let translatedString = '';

	for (i = 0; i < string.length; i++) {
		translatedString += leetCodex[string.charAt(i).toUpperCase()];
    }

	return translatedString;

};

console.log(leetTranslator('Multiverse'));
console.log(leetTranslator('ABCDEFGhjbvgctxGUVFYvggv'));
console.log(typeof(leetTranslator('Multiverse')));
