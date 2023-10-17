import java.time.Year;
public class IDCard {
      private int  sodinhdanh;
      private String hoten;
      private String gioitinh;
      private String ngaythangnamsinh;
      private String diachi;
      private int sdt;
      public IDCard(int sodinhdanh, String hoten, String gioitinh, String ngaythangnamsinh,String diachi, int sdt) {
            super();
            this.sodinhdanh = sodinhdanh;
            this.hoten = hoten;
            this.gioitinh = gioitinh;
            this.ngaythangnamsinh = ngaythangnamsinh;
            this.diachi=diachi;
            this.sdt = sdt;
      }
      public int getSodinhdanh() {
            return sodinhdanh;
      }
	  public int getTuoi(){
		 String[] tach1=getNgaythangnamsinh().split("/");
		 int namsinh1=Integer.valueOf(tach1[2]);
		 return Year.now().getValue()-namsinh1;
	  }
      public void setSodinhdanh(int sodinhdanh) {
            this.sodinhdanh = sodinhdanh;
      }
      public String getHoten() {
            return hoten;
      }
      public void setHoten(String hoten) {
            this.hoten = hoten;
            }
      public String getGioitinh() {
            return gioitinh;
      }
      public void setGioitinh(String gioitinh) {
            this.gioitinh = gioitinh;
      }
      public String getNgaythangnamsinh() {
            return ngaythangnamsinh;
      }
      public void setNgaythangnamsinh(String ngaythangnamsinh) {
           this.ngaythangnamsinh = ngaythangnamsinh;
      }
      public int getSdt() {
            return sdt;
      }
      public void setSdt(int sdt) {
            this.sdt = sdt;
      }
      public String getDiachi() {
            return this.diachi;
      }
      public void setSdt(String diachi) {
            this.diachi = diachi;
      }
      @Override
      public String toString() {
            return sodinhdanh + "," + hoten + "," + gioitinh+","+ ngaythangnamsinh
                  + ","+this.diachi+","  + sdt;
      }
}
