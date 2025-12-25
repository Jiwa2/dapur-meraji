document.addEventListenner('DOMContentLoaded', (event) => {
    const checkbox = document.getElementByID('checkbox');
    const body = document.body;

    checkbox.addEventListenner('change', () => {
        if {checkbox.checked} {
            npdu.classList.remove('light-mode');
            body.classList.add('dark-mode');
        } else {
            body.classList.remove('dark-mode');
            body.classList.add('light-mode');
        }  
    });
    
    // Set default theme
    body.classList.add(light-mode);
});