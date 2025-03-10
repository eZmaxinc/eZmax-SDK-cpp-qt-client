/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigntemplateformfieldgroupsigner_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateformfieldgroupsigner_Response::Ezsigntemplateformfieldgroupsigner_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateformfieldgroupsigner_Response::Ezsigntemplateformfieldgroupsigner_Response() {
    this->initializeModel();
}

Ezsigntemplateformfieldgroupsigner_Response::~Ezsigntemplateformfieldgroupsigner_Response() {}

void Ezsigntemplateformfieldgroupsigner_Response::initializeModel() {

    m_pki_ezsigntemplateformfieldgroupsigner_id_isSet = false;
    m_pki_ezsigntemplateformfieldgroupsigner_id_isValid = false;

    m_fki_ezsigntemplatesigner_id_isSet = false;
    m_fki_ezsigntemplatesigner_id_isValid = false;
}

void Ezsigntemplateformfieldgroupsigner_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateformfieldgroupsigner_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplateformfieldgroupsigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplateformfieldgroupsigner_id, json[QString("pkiEzsigntemplateformfieldgroupsignerID")]);
    m_pki_ezsigntemplateformfieldgroupsigner_id_isSet = !json[QString("pkiEzsigntemplateformfieldgroupsignerID")].isNull() && m_pki_ezsigntemplateformfieldgroupsigner_id_isValid;

    m_fki_ezsigntemplatesigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatesigner_id, json[QString("fkiEzsigntemplatesignerID")]);
    m_fki_ezsigntemplatesigner_id_isSet = !json[QString("fkiEzsigntemplatesignerID")].isNull() && m_fki_ezsigntemplatesigner_id_isValid;
}

QString Ezsigntemplateformfieldgroupsigner_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateformfieldgroupsigner_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplateformfieldgroupsigner_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateformfieldgroupsignerID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplateformfieldgroupsigner_id));
    }
    if (m_fki_ezsigntemplatesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatesignerID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatesigner_id));
    }
    return obj;
}

qint32 Ezsigntemplateformfieldgroupsigner_Response::getPkiEzsigntemplateformfieldgroupsignerId() const {
    return m_pki_ezsigntemplateformfieldgroupsigner_id;
}
void Ezsigntemplateformfieldgroupsigner_Response::setPkiEzsigntemplateformfieldgroupsignerId(const qint32 &pki_ezsigntemplateformfieldgroupsigner_id) {
    m_pki_ezsigntemplateformfieldgroupsigner_id = pki_ezsigntemplateformfieldgroupsigner_id;
    m_pki_ezsigntemplateformfieldgroupsigner_id_isSet = true;
}

bool Ezsigntemplateformfieldgroupsigner_Response::is_pki_ezsigntemplateformfieldgroupsigner_id_Set() const{
    return m_pki_ezsigntemplateformfieldgroupsigner_id_isSet;
}

bool Ezsigntemplateformfieldgroupsigner_Response::is_pki_ezsigntemplateformfieldgroupsigner_id_Valid() const{
    return m_pki_ezsigntemplateformfieldgroupsigner_id_isValid;
}

qint32 Ezsigntemplateformfieldgroupsigner_Response::getFkiEzsigntemplatesignerId() const {
    return m_fki_ezsigntemplatesigner_id;
}
void Ezsigntemplateformfieldgroupsigner_Response::setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id) {
    m_fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    m_fki_ezsigntemplatesigner_id_isSet = true;
}

bool Ezsigntemplateformfieldgroupsigner_Response::is_fki_ezsigntemplatesigner_id_Set() const{
    return m_fki_ezsigntemplatesigner_id_isSet;
}

bool Ezsigntemplateformfieldgroupsigner_Response::is_fki_ezsigntemplatesigner_id_Valid() const{
    return m_fki_ezsigntemplatesigner_id_isValid;
}

bool Ezsigntemplateformfieldgroupsigner_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplateformfieldgroupsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateformfieldgroupsigner_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplateformfieldgroupsigner_id_isValid && m_fki_ezsigntemplatesigner_id_isValid && true;
}

} // namespace Ezmaxapi
