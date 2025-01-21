var isSideBarClosed = false;
    // Select the menu icon and the sidebar
    const menuIcon = document.querySelector(".menu-icon");
    const sidebarOpened = document.getElementsByClassName("side-bar-opened")[0];
    const sidebarClosed = document.getElementsByClassName("side-bar-closed")[0];
    const pageViewer = document.getElementsByClassName("page-view")[0];

    // Add event listener to toggle the sidebar
    menuIcon.addEventListener("click", () => {
        if(isSideBarClosed){
            sidebarOpened.style.display = "none";
            sidebarClosed.style.display = "flex";
            isSideBarClosed = !isSideBarClosed;
        } else {
            sidebarOpened.style.display = "flex";
            sidebarClosed.style.display = "none";
            isSideBarClosed = !isSideBarClosed;
        }
    });

const pageViewFrame = document.querySelector('.page-view iframe');

// Listen for clicks on navigation links
document.addEventListener("click", (event) => {
    const target = event.target.closest(".nav-btn-link");
    if (target) {
        const pageSrc = target.getAttribute("data-target");
        if (pageSrc) {
            pageViewFrame.src = pageSrc; // Update iframe source
        }
        event.preventDefault(); // Prevent default link behavior
    }
});


