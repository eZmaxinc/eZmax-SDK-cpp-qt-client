/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsignaturecustomdate_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignsignaturecustomdate_Response::OAIEzsignsignaturecustomdate_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignaturecustomdate_Response::OAIEzsignsignaturecustomdate_Response() {
    this->initializeModel();
}

OAIEzsignsignaturecustomdate_Response::~OAIEzsignsignaturecustomdate_Response() {}

void OAIEzsignsignaturecustomdate_Response::initializeModel() {

    m_pki_ezsignsignaturecustomdate_id_isSet = false;
    m_pki_ezsignsignaturecustomdate_id_isValid = false;

    m_i_ezsignsignaturecustomdate_x_isSet = false;
    m_i_ezsignsignaturecustomdate_x_isValid = false;

    m_i_ezsignsignaturecustomdate_y_isSet = false;
    m_i_ezsignsignaturecustomdate_y_isValid = false;

    m_s_ezsignsignaturecustomdate_format_isSet = false;
    m_s_ezsignsignaturecustomdate_format_isValid = false;
}

void OAIEzsignsignaturecustomdate_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignaturecustomdate_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignaturecustomdate_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignsignaturecustomdate_id, json[QString("pkiEzsignsignaturecustomdateID")]);
    m_pki_ezsignsignaturecustomdate_id_isSet = !json[QString("pkiEzsignsignaturecustomdateID")].isNull() && m_pki_ezsignsignaturecustomdate_id_isValid;

    m_i_ezsignsignaturecustomdate_x_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignaturecustomdate_x, json[QString("iEzsignsignaturecustomdateX")]);
    m_i_ezsignsignaturecustomdate_x_isSet = !json[QString("iEzsignsignaturecustomdateX")].isNull() && m_i_ezsignsignaturecustomdate_x_isValid;

    m_i_ezsignsignaturecustomdate_y_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignaturecustomdate_y, json[QString("iEzsignsignaturecustomdateY")]);
    m_i_ezsignsignaturecustomdate_y_isSet = !json[QString("iEzsignsignaturecustomdateY")].isNull() && m_i_ezsignsignaturecustomdate_y_isValid;

    m_s_ezsignsignaturecustomdate_format_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignsignaturecustomdate_format, json[QString("sEzsignsignaturecustomdateFormat")]);
    m_s_ezsignsignaturecustomdate_format_isSet = !json[QString("sEzsignsignaturecustomdateFormat")].isNull() && m_s_ezsignsignaturecustomdate_format_isValid;
}

QString OAIEzsignsignaturecustomdate_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignaturecustomdate_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignaturecustomdate_id_isSet) {
        obj.insert(QString("pkiEzsignsignaturecustomdateID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignsignaturecustomdate_id));
    }
    if (m_i_ezsignsignaturecustomdate_x_isSet) {
        obj.insert(QString("iEzsignsignaturecustomdateX"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignaturecustomdate_x));
    }
    if (m_i_ezsignsignaturecustomdate_y_isSet) {
        obj.insert(QString("iEzsignsignaturecustomdateY"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignaturecustomdate_y));
    }
    if (m_s_ezsignsignaturecustomdate_format_isSet) {
        obj.insert(QString("sEzsignsignaturecustomdateFormat"), ::Ezmaxapi::toJsonValue(m_s_ezsignsignaturecustomdate_format));
    }
    return obj;
}

qint32 OAIEzsignsignaturecustomdate_Response::getPkiEzsignsignaturecustomdateId() const {
    return m_pki_ezsignsignaturecustomdate_id;
}
void OAIEzsignsignaturecustomdate_Response::setPkiEzsignsignaturecustomdateId(const qint32 &pki_ezsignsignaturecustomdate_id) {
    m_pki_ezsignsignaturecustomdate_id = pki_ezsignsignaturecustomdate_id;
    m_pki_ezsignsignaturecustomdate_id_isSet = true;
}

bool OAIEzsignsignaturecustomdate_Response::is_pki_ezsignsignaturecustomdate_id_Set() const{
    return m_pki_ezsignsignaturecustomdate_id_isSet;
}

bool OAIEzsignsignaturecustomdate_Response::is_pki_ezsignsignaturecustomdate_id_Valid() const{
    return m_pki_ezsignsignaturecustomdate_id_isValid;
}

qint32 OAIEzsignsignaturecustomdate_Response::getIEzsignsignaturecustomdateX() const {
    return m_i_ezsignsignaturecustomdate_x;
}
void OAIEzsignsignaturecustomdate_Response::setIEzsignsignaturecustomdateX(const qint32 &i_ezsignsignaturecustomdate_x) {
    m_i_ezsignsignaturecustomdate_x = i_ezsignsignaturecustomdate_x;
    m_i_ezsignsignaturecustomdate_x_isSet = true;
}

bool OAIEzsignsignaturecustomdate_Response::is_i_ezsignsignaturecustomdate_x_Set() const{
    return m_i_ezsignsignaturecustomdate_x_isSet;
}

bool OAIEzsignsignaturecustomdate_Response::is_i_ezsignsignaturecustomdate_x_Valid() const{
    return m_i_ezsignsignaturecustomdate_x_isValid;
}

qint32 OAIEzsignsignaturecustomdate_Response::getIEzsignsignaturecustomdateY() const {
    return m_i_ezsignsignaturecustomdate_y;
}
void OAIEzsignsignaturecustomdate_Response::setIEzsignsignaturecustomdateY(const qint32 &i_ezsignsignaturecustomdate_y) {
    m_i_ezsignsignaturecustomdate_y = i_ezsignsignaturecustomdate_y;
    m_i_ezsignsignaturecustomdate_y_isSet = true;
}

bool OAIEzsignsignaturecustomdate_Response::is_i_ezsignsignaturecustomdate_y_Set() const{
    return m_i_ezsignsignaturecustomdate_y_isSet;
}

bool OAIEzsignsignaturecustomdate_Response::is_i_ezsignsignaturecustomdate_y_Valid() const{
    return m_i_ezsignsignaturecustomdate_y_isValid;
}

QString OAIEzsignsignaturecustomdate_Response::getSEzsignsignaturecustomdateFormat() const {
    return m_s_ezsignsignaturecustomdate_format;
}
void OAIEzsignsignaturecustomdate_Response::setSEzsignsignaturecustomdateFormat(const QString &s_ezsignsignaturecustomdate_format) {
    m_s_ezsignsignaturecustomdate_format = s_ezsignsignaturecustomdate_format;
    m_s_ezsignsignaturecustomdate_format_isSet = true;
}

bool OAIEzsignsignaturecustomdate_Response::is_s_ezsignsignaturecustomdate_format_Set() const{
    return m_s_ezsignsignaturecustomdate_format_isSet;
}

bool OAIEzsignsignaturecustomdate_Response::is_s_ezsignsignaturecustomdate_format_Valid() const{
    return m_s_ezsignsignaturecustomdate_format_isValid;
}

bool OAIEzsignsignaturecustomdate_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignaturecustomdate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignaturecustomdate_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignaturecustomdate_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsignaturecustomdate_format_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignaturecustomdate_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsignaturecustomdate_id_isValid && m_i_ezsignsignaturecustomdate_x_isValid && m_i_ezsignsignaturecustomdate_y_isValid && m_s_ezsignsignaturecustomdate_format_isValid && true;
}

} // namespace Ezmaxapi
