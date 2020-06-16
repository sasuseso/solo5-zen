FROM archlinux
RUN pacman -Syu --noconfirm
RUN pacman -S --noconfirm base-devel git wget
WORKDIR /root
RUN wget https://zen-lang.org/dist/0.8.20200615LTS/zen-linux-x86_64-0.8.20200615LTS.tar.xz
RUN tar xf zen-linux-x86_64-0.8.20200615LTS.tar.xz
RUN rm -rf zen-linux-x86_64-0.8.20200615LTS.tar.xz
RUN git clone https://github.com/Solo5/solo5.git
RUN cd solo5 && ./configure.sh && make
RUN echo "export PATH=$PATH:/root/zen-linux-x86_64-0.8.20200615LTS" > ~/.bashrc && source ~/.bashrc
RUN git clone https://github.com/sasuseso/solo5-zen.git
WORKDIR /root/solo5-zen
CMD ["bash"]
