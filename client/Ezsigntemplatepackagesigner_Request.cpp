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

#include "Ezsigntemplatepackagesigner_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepackagesigner_Request::Ezsigntemplatepackagesigner_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepackagesigner_Request::Ezsigntemplatepackagesigner_Request() {
    this->initializeModel();
}

Ezsigntemplatepackagesigner_Request::~Ezsigntemplatepackagesigner_Request() {}

void Ezsigntemplatepackagesigner_Request::initializeModel() {

    m_pki_ezsigntemplatepackagesigner_id_isSet = false;
    m_pki_ezsigntemplatepackagesigner_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_s_ezsigntemplatepackagesigner_description_isSet = false;
    m_s_ezsigntemplatepackagesigner_description_isValid = false;
}

void Ezsigntemplatepackagesigner_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepackagesigner_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagesigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatepackagesigner_id, json[QString("pkiEzsigntemplatepackagesignerID")]);
    m_pki_ezsigntemplatepackagesigner_id_isSet = !json[QString("pkiEzsigntemplatepackagesignerID")].isNull() && m_pki_ezsigntemplatepackagesigner_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_s_ezsigntemplatepackagesigner_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepackagesigner_description, json[QString("sEzsigntemplatepackagesignerDescription")]);
    m_s_ezsigntemplatepackagesigner_description_isSet = !json[QString("sEzsigntemplatepackagesignerDescription")].isNull() && m_s_ezsigntemplatepackagesigner_description_isValid;
}

QString Ezsigntemplatepackagesigner_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepackagesigner_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagesigner_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagesignerID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatepackagesigner_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_s_ezsigntemplatepackagesigner_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackagesignerDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepackagesigner_description));
    }
    return obj;
}

qint32 Ezsigntemplatepackagesigner_Request::getPkiEzsigntemplatepackagesignerId() const {
    return m_pki_ezsigntemplatepackagesigner_id;
}
void Ezsigntemplatepackagesigner_Request::setPkiEzsigntemplatepackagesignerId(const qint32 &pki_ezsigntemplatepackagesigner_id) {
    m_pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    m_pki_ezsigntemplatepackagesigner_id_isSet = true;
}

bool Ezsigntemplatepackagesigner_Request::is_pki_ezsigntemplatepackagesigner_id_Set() const{
    return m_pki_ezsigntemplatepackagesigner_id_isSet;
}

bool Ezsigntemplatepackagesigner_Request::is_pki_ezsigntemplatepackagesigner_id_Valid() const{
    return m_pki_ezsigntemplatepackagesigner_id_isValid;
}

qint32 Ezsigntemplatepackagesigner_Request::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void Ezsigntemplatepackagesigner_Request::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsigntemplatepackagesigner_Request::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool Ezsigntemplatepackagesigner_Request::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

QString Ezsigntemplatepackagesigner_Request::getSEzsigntemplatepackagesignerDescription() const {
    return m_s_ezsigntemplatepackagesigner_description;
}
void Ezsigntemplatepackagesigner_Request::setSEzsigntemplatepackagesignerDescription(const QString &s_ezsigntemplatepackagesigner_description) {
    m_s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;
    m_s_ezsigntemplatepackagesigner_description_isSet = true;
}

bool Ezsigntemplatepackagesigner_Request::is_s_ezsigntemplatepackagesigner_description_Set() const{
    return m_s_ezsigntemplatepackagesigner_description_isSet;
}

bool Ezsigntemplatepackagesigner_Request::is_s_ezsigntemplatepackagesigner_description_Valid() const{
    return m_s_ezsigntemplatepackagesigner_description_isValid;
}

bool Ezsigntemplatepackagesigner_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepackagesigner_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepackagesigner_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplatepackage_id_isValid && m_s_ezsigntemplatepackagesigner_description_isValid && true;
}

} // namespace Ezmaxapi
