/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigntemplatesignaturecustomdate_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatesignaturecustomdate_Request::Ezsigntemplatesignaturecustomdate_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatesignaturecustomdate_Request::Ezsigntemplatesignaturecustomdate_Request() {
    this->initializeModel();
}

Ezsigntemplatesignaturecustomdate_Request::~Ezsigntemplatesignaturecustomdate_Request() {}

void Ezsigntemplatesignaturecustomdate_Request::initializeModel() {

    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = false;
    m_pki_ezsigntemplatesignaturecustomdate_id_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_x_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_x_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_y_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_y_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_offsety_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_offsety_isValid = false;

    m_s_ezsigntemplatesignaturecustomdate_format_isSet = false;
    m_s_ezsigntemplatesignaturecustomdate_format_isValid = false;
}

void Ezsigntemplatesignaturecustomdate_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatesignaturecustomdate_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatesignaturecustomdate_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatesignaturecustomdate_id, json[QString("pkiEzsigntemplatesignaturecustomdateID")]);
    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = !json[QString("pkiEzsigntemplatesignaturecustomdateID")].isNull() && m_pki_ezsigntemplatesignaturecustomdate_id_isValid;

    m_i_ezsigntemplatesignaturecustomdate_x_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignaturecustomdate_x, json[QString("iEzsigntemplatesignaturecustomdateX")]);
    m_i_ezsigntemplatesignaturecustomdate_x_isSet = !json[QString("iEzsigntemplatesignaturecustomdateX")].isNull() && m_i_ezsigntemplatesignaturecustomdate_x_isValid;

    m_i_ezsigntemplatesignaturecustomdate_y_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignaturecustomdate_y, json[QString("iEzsigntemplatesignaturecustomdateY")]);
    m_i_ezsigntemplatesignaturecustomdate_y_isSet = !json[QString("iEzsigntemplatesignaturecustomdateY")].isNull() && m_i_ezsigntemplatesignaturecustomdate_y_isValid;

    m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignaturecustomdate_offsetx, json[QString("iEzsigntemplatesignaturecustomdateOffsetx")]);
    m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet = !json[QString("iEzsigntemplatesignaturecustomdateOffsetx")].isNull() && m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid;

    m_i_ezsigntemplatesignaturecustomdate_offsety_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignaturecustomdate_offsety, json[QString("iEzsigntemplatesignaturecustomdateOffsety")]);
    m_i_ezsigntemplatesignaturecustomdate_offsety_isSet = !json[QString("iEzsigntemplatesignaturecustomdateOffsety")].isNull() && m_i_ezsigntemplatesignaturecustomdate_offsety_isValid;

    m_s_ezsigntemplatesignaturecustomdate_format_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatesignaturecustomdate_format, json[QString("sEzsigntemplatesignaturecustomdateFormat")]);
    m_s_ezsigntemplatesignaturecustomdate_format_isSet = !json[QString("sEzsigntemplatesignaturecustomdateFormat")].isNull() && m_s_ezsigntemplatesignaturecustomdate_format_isValid;
}

QString Ezsigntemplatesignaturecustomdate_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatesignaturecustomdate_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatesignaturecustomdate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatesignaturecustomdateID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatesignaturecustomdate_id));
    }
    if (m_i_ezsigntemplatesignaturecustomdate_x_isSet) {
        obj.insert(QString("iEzsigntemplatesignaturecustomdateX"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignaturecustomdate_x));
    }
    if (m_i_ezsigntemplatesignaturecustomdate_y_isSet) {
        obj.insert(QString("iEzsigntemplatesignaturecustomdateY"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignaturecustomdate_y));
    }
    if (m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet) {
        obj.insert(QString("iEzsigntemplatesignaturecustomdateOffsetx"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignaturecustomdate_offsetx));
    }
    if (m_i_ezsigntemplatesignaturecustomdate_offsety_isSet) {
        obj.insert(QString("iEzsigntemplatesignaturecustomdateOffsety"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignaturecustomdate_offsety));
    }
    if (m_s_ezsigntemplatesignaturecustomdate_format_isSet) {
        obj.insert(QString("sEzsigntemplatesignaturecustomdateFormat"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatesignaturecustomdate_format));
    }
    return obj;
}

qint32 Ezsigntemplatesignaturecustomdate_Request::getPkiEzsigntemplatesignaturecustomdateId() const {
    return m_pki_ezsigntemplatesignaturecustomdate_id;
}
void Ezsigntemplatesignaturecustomdate_Request::setPkiEzsigntemplatesignaturecustomdateId(const qint32 &pki_ezsigntemplatesignaturecustomdate_id) {
    m_pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_pki_ezsigntemplatesignaturecustomdate_id_Set() const{
    return m_pki_ezsigntemplatesignaturecustomdate_id_isSet;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_pki_ezsigntemplatesignaturecustomdate_id_Valid() const{
    return m_pki_ezsigntemplatesignaturecustomdate_id_isValid;
}

qint32 Ezsigntemplatesignaturecustomdate_Request::getIEzsigntemplatesignaturecustomdateX() const {
    return m_i_ezsigntemplatesignaturecustomdate_x;
}
void Ezsigntemplatesignaturecustomdate_Request::setIEzsigntemplatesignaturecustomdateX(const qint32 &i_ezsigntemplatesignaturecustomdate_x) {
    m_i_ezsigntemplatesignaturecustomdate_x = i_ezsigntemplatesignaturecustomdate_x;
    m_i_ezsigntemplatesignaturecustomdate_x_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_i_ezsigntemplatesignaturecustomdate_x_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_x_isSet;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_i_ezsigntemplatesignaturecustomdate_x_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_x_isValid;
}

qint32 Ezsigntemplatesignaturecustomdate_Request::getIEzsigntemplatesignaturecustomdateY() const {
    return m_i_ezsigntemplatesignaturecustomdate_y;
}
void Ezsigntemplatesignaturecustomdate_Request::setIEzsigntemplatesignaturecustomdateY(const qint32 &i_ezsigntemplatesignaturecustomdate_y) {
    m_i_ezsigntemplatesignaturecustomdate_y = i_ezsigntemplatesignaturecustomdate_y;
    m_i_ezsigntemplatesignaturecustomdate_y_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_i_ezsigntemplatesignaturecustomdate_y_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_y_isSet;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_i_ezsigntemplatesignaturecustomdate_y_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_y_isValid;
}

qint32 Ezsigntemplatesignaturecustomdate_Request::getIEzsigntemplatesignaturecustomdateOffsetx() const {
    return m_i_ezsigntemplatesignaturecustomdate_offsetx;
}
void Ezsigntemplatesignaturecustomdate_Request::setIEzsigntemplatesignaturecustomdateOffsetx(const qint32 &i_ezsigntemplatesignaturecustomdate_offsetx) {
    m_i_ezsigntemplatesignaturecustomdate_offsetx = i_ezsigntemplatesignaturecustomdate_offsetx;
    m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_i_ezsigntemplatesignaturecustomdate_offsetx_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_i_ezsigntemplatesignaturecustomdate_offsetx_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid;
}

qint32 Ezsigntemplatesignaturecustomdate_Request::getIEzsigntemplatesignaturecustomdateOffsety() const {
    return m_i_ezsigntemplatesignaturecustomdate_offsety;
}
void Ezsigntemplatesignaturecustomdate_Request::setIEzsigntemplatesignaturecustomdateOffsety(const qint32 &i_ezsigntemplatesignaturecustomdate_offsety) {
    m_i_ezsigntemplatesignaturecustomdate_offsety = i_ezsigntemplatesignaturecustomdate_offsety;
    m_i_ezsigntemplatesignaturecustomdate_offsety_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_i_ezsigntemplatesignaturecustomdate_offsety_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_offsety_isSet;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_i_ezsigntemplatesignaturecustomdate_offsety_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_offsety_isValid;
}

QString Ezsigntemplatesignaturecustomdate_Request::getSEzsigntemplatesignaturecustomdateFormat() const {
    return m_s_ezsigntemplatesignaturecustomdate_format;
}
void Ezsigntemplatesignaturecustomdate_Request::setSEzsigntemplatesignaturecustomdateFormat(const QString &s_ezsigntemplatesignaturecustomdate_format) {
    m_s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;
    m_s_ezsigntemplatesignaturecustomdate_format_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_s_ezsigntemplatesignaturecustomdate_format_Set() const{
    return m_s_ezsigntemplatesignaturecustomdate_format_isSet;
}

bool Ezsigntemplatesignaturecustomdate_Request::is_s_ezsigntemplatesignaturecustomdate_format_Valid() const{
    return m_s_ezsigntemplatesignaturecustomdate_format_isValid;
}

bool Ezsigntemplatesignaturecustomdate_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatesignaturecustomdate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignaturecustomdate_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignaturecustomdate_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignaturecustomdate_offsety_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatesignaturecustomdate_format_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatesignaturecustomdate_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezsigntemplatesignaturecustomdate_format_isValid && true;
}

} // namespace Ezmaxapi
