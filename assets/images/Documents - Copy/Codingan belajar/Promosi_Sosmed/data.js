const  nama = "jiwa";
let usia = 15;

const biodata = document.getElementById('biodata');

function generateBiodata() {
    let generasi;

    if(usia > 1 && usia < 10 ) {
        generasi = "generasi anak anak";
    } 
    else if (usia > 10 && usia < 20) {
        generasi = "generasi remaja";
    }
    else if (usia > 30 && usia < 40) {
        generasi = "generasi dewasa";
    }    
    else if (usia > 40 && usia < 100) {
        generasi = "generasi tua bangka";
    }
     else {
        generasi = "makhluk tidak diketahui";
    }
    return biodata.innerHTML = generasi;
}

console.log (nama);
console.log (usia);

generateBiodata();
