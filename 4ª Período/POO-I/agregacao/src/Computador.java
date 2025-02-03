public class Computador {

    private String dono;
    private Monitor monitor;
    private Monitor monitorDois;

    public Computador(String dono) {
        this.dono = dono;
    }

    public boolean addMonitor(Monitor monitor) {
        if (this.monitor == null) {
            this.monitor = monitor;
            return true;
        } else if (this.monitorDois == null) {
            this.monitorDois = monitor;
            return true;
        }
        return false;
    }

    public boolean removeMonitor(Monitor monitor) {
        if (this.monitor != null) {
            this.monitor = null;
            return true;
        } else if (this.monitorDois != null) {
            this.monitorDois = null;
            return true;
        }
        return false;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    @Override
    public String toString() {
        return "Computador{" +
                "dono='" + dono + '\'' +
                ", monitor=" + monitor +
                ", monitorDois=" + monitorDois +
                '}';
    }
}
