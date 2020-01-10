%global dataversion 0.2.7

Name:		libkkc
Version:	0.3.1
Release:	1%{?dist}
Summary:	Japanese Kana Kanji conversion library

License:	GPLv3+
Group:		System Environment/Libraries
URL:		https://bitbucket.org/libkkc
Source0:	https://bitbucket.org/libkkc/libkkc/downloads/%{name}-%{version}.tar.gz
Source1:	https://bitbucket.org/libkkc/libkkc-data/downloads/%{name}-data-%{dataversion}.tar.xz
#Patch0:		libkkc-HEAD.patch

BuildRequires:	marisa-devel
BuildRequires:	vala
# Needed when any of *.vala files changed
BuildRequires:	vala-tools, vala-devel
# FIXME switch to libgee-0.8 once this package is ready for the new libgee API
BuildRequires:	pkgconfig(gee-1.0)
BuildRequires:	json-glib-devel
BuildRequires:	gobject-introspection-devel
BuildRequires:	intltool
BuildRequires:	python2-devel

Requires:	skkdic
Requires:	%{name}-data = %{version}-%{release}
Requires:	%{name}-common = %{version}-%{release}

%description
libkkc provides a converter from Kana-string to
Kana-Kanji-mixed-string.  It was named after kkc.el in GNU Emacs, a
simple Kana Kanji converter, while libkkc tries to convert sentences
in a bit more complex way using N-gram language models.


%package	devel
Summary:	Development files for %{name}
Requires:	%{name}%{?_isa} = %{version}-%{release}

%description	devel
The %{name}-devel package contains libraries and header files for
developing applications that use %{name}.


%package        tools
Summary:	Tools for %{name}
Group:		Development/Tools
Requires:	%{name}%{?_isa} = %{version}-%{release}

%description	tools
The %{name}-tools package contains tools for developing applications
that use %{name}.


%package	common
Summary:	Common data files for %{name}
BuildArch:	noarch

%description	common
The %{name}-common package contains the arch-independent data that
%{name} uses at run time.


%package	data
Summary:	Data files for %{name}
BuildRequires:	marisa-python

%description	data
The %{name}-data package contains the language model data that %{name}
uses at run time.


%prep
%setup -q
#patch0 -p1 -b .HEAD


%build
%configure --disable-static --disable-silent-rules
make %{?_smp_mflags}


%check
make check


%install
%make_install INSTALL="install -p"

tar xf %{SOURCE1}
pushd %{name}-data-%{dataversion}
%configure
%make_install INSTALL="install -p"
popd

find $RPM_BUILD_ROOT -name '*.la' -exec rm -f {} ';'

%find_lang %{name}


%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig


%files -f %{name}.lang
%doc README data/rules/README.rules COPYING
%{_libdir}/*.so.*
%{_libdir}/girepository-1.0/*.typelib

%files common
%{_datadir}/libkkc

%files data
%{_libdir}/libkkc

%files devel
%doc
%{_includedir}/*
%{_libdir}/*.so
%{_libdir}/pkgconfig/*.pc
%{_datadir}/gir-1.0/*.gir
%{_datadir}/vala/vapi/*

%files tools
%{_bindir}/kkc*


%changelog
* Sun Sep 15 2013 Daiki Ueno <dueno@redhat.com> - 0.3.1-1
- new upstreamm release
- fix numeric conversion
- add minimum cost of backward search

* Wed Sep 11 2013 Daiki Ueno <dueno@redhat.com> - 0.3.0-1
- new upstream release (Closes: #970863)

* Mon Jul 29 2013 Daiki Ueno <dueno@redhat.com> - 0.2.7-1
- new upstream release
- enable make check on %%check
- drop buildroot cleanup

* Fri Jul  5 2013 Daiki Ueno <dueno@redhat.com> - 0.2.6-1
- new upstream release

* Thu Jul  4 2013 Daiki Ueno <dueno@redhat.com> - 0.2.5-1
- new upstream release

* Fri Jun  7 2013 Daiki Ueno <dueno@redhat.com> - 0.2.4-1
- new upstream release

* Wed May 15 2013 Daiki Ueno <dueno@redhat.com> - 0.2.3-1
- new upstream release

* Wed May  8 2013 Daiki Ueno <dueno@redhat.com> - 0.2.2-1
- new upstream release

* Wed May  1 2013 Daiki Ueno <dueno@redhat.com> - 0.2.1-1
- new upstream release

* Wed May  1 2013 Daiki Ueno <dueno@redhat.com> - 0.2.0-2
- synch with the latest upstream git master

* Tue Apr 30 2013 Daiki Ueno <dueno@redhat.com> - 0.2.0-1
- new upstream release

* Tue Mar 19 2013 Daiki Ueno <dueno@redhat.com> - 0.1.10-1
- new upstream release

* Tue Mar 12 2013 Daiki Ueno <dueno@redhat.com> - 0.1.9-1
- new upstream release

* Fri Feb 22 2013 Daiki Ueno <dueno@redhat.com> - 0.1.7-1
- new upstream release

* Sun Feb 10 2013 Daiki Ueno <dueno@redhat.com> - 0.1.5-1
- new upstream release

* Fri Feb  8 2013 Daiki Ueno <dueno@redhat.com> - 0.1.3-1
- move arch-independent data files to -common subpackage
- remove unnecessary R: from -common and -data subpackages
- add BR: python2-devel

* Thu Feb  7 2013 Daiki Ueno <dueno@redhat.com> - 0.1.3-1
- new upstream release
- add BR: marisa-python to generate -data package

* Wed Feb  6 2013 Daiki Ueno <dueno@redhat.com> - 0.1.2-2
- add ChangeLog to -data subpackages's %%doc
- remove unnecessary BR: libfep-devel

* Tue Feb  5 2013 Daiki Ueno <dueno@redhat.com> - 0.1.2-1
- new upstream release
- fix description of -data subpackage
- use popd instead of "cd -"

* Mon Feb  4 2013 Daiki Ueno <dueno@redhat.com> - 0.1.1-1
- new upstream release
- disable silent rules

* Thu Jan 31 2013 Daiki Ueno <dueno@redhat.com> - 0.1.0-1
- new upstream release

* Thu Jan 24 2013 Daiki Ueno <dueno@redhat.com> - 0.0.1-1
- initial packaging

