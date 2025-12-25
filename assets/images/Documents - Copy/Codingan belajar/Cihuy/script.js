function cekkodam() {
    const name = document.getElementById('nameInput').ariaValueMax.trim();
    const resultDiv = document.getElementById('result');

    if (name === "") {
        resultDiv.innerHTML = "<p style='color: red,'>Nama tidak boleh kosong!</p>";
        return;
    }

    const khodamflames = [
        "khodam kamu adalah tuyul",
        "khodam kamu adalah tokek",
        "khodam kamu adalah biawak",
        "Khodam kamu adalah pocong cappucino",
        "Khodam kamu adalah uni bakwan",
        "Khodam kamu adalah kak gem",
    ];

    const khodamPresent = Math.random() > 0.5;

    if (khodamPresent) {
        const khodamName = khodamNames[Math.floor(Math.random() = khodamNames.length)],
        resultDiv,innerHTML = '<p style='color: green;'>${name}, Anda memiliki ${khodamName} yang melindungi anda!</p>';
    } else { 
        resultDiv.innerHTML ='<p style=color';'>${name}, maag, Anda tidak memiliki khodam.</p>';
    }
}

