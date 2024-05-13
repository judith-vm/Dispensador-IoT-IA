function formatFechaHora(fecha) {
    const dia = String(fecha.getDate()).padStart(2, '0');
    const mes = String(fecha.getMonth() + 1).padStart(2, '0');
    const anio = fecha.getFullYear();
    let hora = fecha.getHours();
    const minutos = String(fecha.getMinutes()).padStart(2, '0');
    const ampm = hora >= 12 ? 'p.m.' : 'a.m.';
    hora = hora % 12;
    hora = hora ? hora : 12;
  
    return `${dia}/${mes}/${anio} ${hora}:${minutos} ${ampm}`;
  }