/* Funções para calcular mmc(minimo multiplo comum) e mdc(maximo divisor comum) */
/* Autor: João Paulo Neves */
/* Feito em: Abril/2020 */

const mdcCalc = (m, n) => {
// Cálculo do MDC
let divisor = 2;
mdc = 1;
while (divisor <= m && divisor <= n) {
    if (m % divisor == 0 && n % divisor == 0 && primo(divisor)) {
        mdc *= divisor;
        m /= divisor;
        n /= divisor;
        divisor = 2;
    } else {
        divisor++;
    }
}
return { mdc, m, n, divisor };
}
// console.log(`${JSON.stringify(mdcCalc(1, 3))} + ${JSON.stringify(mdcCalc(8, 15))}`);

const mmcCalc = (m, n, mdc) => {
// Cálculo do MMC
let mmc = (m * n) / mdc;
return { mmc, m, n, mdc };
}

/**
 * Numeros Primos
 *
 * @param {*} n
 * @returns status: bool
 */
const primo = (n) => {
let status = true;
for (
    possivelDivisor = 2;
    possivelDivisor <= Math.floor(n / 2);
    possivelDivisor++
) {
    if (n % possivelDivisor == 0) {
        // possível divisor >> divisor
        status = false;
        break;
    }
}
return status;
}

const fatoracao = (...n) => {
let arrayNumbers = [];
n.forEach(e => {
    arrayNumbers.push(e);
});

//console.log(`verifica fatoracao: ${arrayNumbers}`);
}

divisao = (8/15) - (1/3);
//console.log(divisao);

//fatoracao([7,9,3,8]);
// console.log(mdcCalc(8, 15));
let n1 = 15, n2 = 3;


//Função recursiva para calcular o MDC (máximo divisor comum)
function mdc(x,y){
let a = max(x,y);
let b = min(x,y);
if(a%b == 0){
    return b;
}else{
    return mdc(b,(a%b));
}
}

//Não importa a ordem
// console.log(mdc(48,30)); //6
// console.log(mdc(30,48)); //6

/*
CÁLCULO DO M.M.C EFICIENTE (mínimo múltiplo comum)
fonte:wikipedia
Regra prática:
mmc(x,y) = (($x*$y)/(mdc($x,$y)));
*/
function mmc(x,y){
return ((x*y)/(mdc(x,y)));
}

// console.log(mmc(4,6)); //12
// console.log(mmc(4,15)); //60
// console.log(mmc(12,30)); //60


// let foo = 7;
// const x = f(foo) => {

// };

// if (x > boundary) {
//   x = boundary;
// }
// console.log(x);

//mmc
// function divisibleAll(numbers, multiple) {

// 	for (let i = 0; i < numbers.length; i++) {

// 		if (multiple % numbers[i] !== 0) {

// 			return false;
// 		}
// 	}

// 	return true;
// }

// function mmc(numbers) {



// 	numbers.sort((a, b) => {

// 		if (a > b) {

// 			return -1;
// 		}

// 		if (a < b) {

// 			return 1;
// 		}

// 		return 0;
// 	});

// 	numbers = Array.from(new Set(numbers));

//     var greather = numbers.shift();
//     console.info(greather);
// 	var i = 1;

// 	while (true) {

// 		let multiple = greather * i;

// 		if (divisibleAll(numbers, multiple)) {
//             console.info("numbers => " + numbers);
//             console.info("multiple => " + multiple);
// 			return multiple;
// 		}

// 		i++;
// 	}
// }

// console.log(mmc([8,4,6,9,2,4,6,7,8,9]));

// function calcHypotenuse(a, b) {
//     return(Math.sqrt((a * a) + (b * b)));
// }

// console.log(calcHypotenuse(3, 4));
// // expected output: 5

/**
 * retorna o valor do Minimo Multiplo Comum.
 *
 * @param {*} e [...,{numerador, denominador}]
 * return mmcValue
 */
function mmc(e) {
    let repeticoes = 0;
    let numeradorTemp = 0;
    let denominadorTemp = 0;
    let arrayOrganizado = e.sort();
    console.info("arrayOrganizado => " + JSON.stringify(arrayOrganizado));
    e.forEach(el => {
        repeticoes++;
        numeradorTemp = el["numerador"];
        denominadorTemp = el["denominador"];
    });
}

// mmc([{numerador: 8, denominador: 15}, {numerador: 1, denominador: 3}]);

/**
 * retorna o valor do Minimo Multiplo Comum.
 *
 * @param {*} e [...,{numerador, denominador}]
 * return mdcValue
 */
function mdc (e) {
    // if (e.b == 0)
    //     return e.a;
    // else
    //     return MDC(e.b, e.a % e.b);
    let r = 0;
    while (e.b != 0)
        r = e.a % e.b; console.info(r);
        e.a = e.b;
        e.b = r;
    return e.a;
}
console.log(mdc({a: 40, b: 20, }))
