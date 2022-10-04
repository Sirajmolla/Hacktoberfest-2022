
const currencyFormattedNumber = (val, decimals, currency = "USD") => {
    if (typeof val === "string") {
        val = Number(val);
    }
    let currencyPerfix = "";
    let currencySuffix = "";
    if (val == 0 || !val) {
        return "$0";
    } else if (val < 0) {
        currencyPerfix = "-";
        val = Math.abs(val);
    } else if (val > 999999999) {
        decimals = 2;
        val = val / 1000000000;
        currencySuffix = 'B';
    } else if (val > 999999) {
        decimals = 2;
        val = val / 1000000;
        currencySuffix = "M";
    }
    const _val = val.toLocaleString("en-US", {
        style: "currency",
        currency: currency,
        maximumFractionDigits: decimals,
        currencyDisplay: "symbol",
    });
    if (!_val.includes("$")) {
        return "$" + _val + currencySuffix;
    }
    return currencyPerfix + _val + currencySuffix;

}

console.log(currencyFormattedNumber("2000", 2))