FROM archlinux
RUN pacman -Syu --noconfirm
RUN pacman -S --noconfirm base-devel git wget
RUN cd ~ && wget https://zen-lang.org/dist/0.8.20200615LTS/zen-linux-x86_64-0.8.20200615LTS.tar.xz
RUN cd ~ && tar xf zen-linux-x86_64-0.8.20200615LTS.tar.xz
RUN cd ~ && rm -rf zen-linux-x86_64-0.8.20200615LTS.tar.xz
RUN cd ~ && git clone https://github.com/Solo5/solo5.git
RUN cd ~/solo5 && ./configure.sh && make
RUN echo "export PATH=$PATH:/root/zen-linux-x86_64-0.8.20200615LTS" > ~/.bashrc && source ~/.bashrc
RUN cd ~ && git clone https://github.com/sasuseso/solo5-zen.git && cd solo5-zen && git pull
CMD ["bash"]
