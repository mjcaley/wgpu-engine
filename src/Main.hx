import sdl.Sdl;
import sdl.Window;


class Main {
    static public function main(): Void {
        Sdl.init();
        var window = new Window("This is a window", 800, 600);
        
        var quit = false;
        while (!quit)
        {
            var _ = Sdl.processEvents((event) -> {
                switch (event.type) {
                    case Quit:
                        quit = true;
                        return true;
                    case KeyDown:
                        if (event.keyCode == 27) {
                            quit = true;
                            return true;
                        }
                    case _:
                        return false;
                }
                return false;
            });

            window.present();
        }

        window.destroy();
    }
}
