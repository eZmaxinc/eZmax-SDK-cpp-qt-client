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

#include "Ezsigntemplatepackagesignermembership_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepackagesignermembership_ResponseCompound::Ezsigntemplatepackagesignermembership_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepackagesignermembership_ResponseCompound::Ezsigntemplatepackagesignermembership_ResponseCompound() {
    this->initializeModel();
}

Ezsigntemplatepackagesignermembership_ResponseCompound::~Ezsigntemplatepackagesignermembership_ResponseCompound() {}

void Ezsigntemplatepackagesignermembership_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplatepackagesignermembership_id_isSet = false;
    m_pki_ezsigntemplatepackagesignermembership_id_isValid = false;

    m_fki_ezsigntemplatepackagemembership_id_isSet = false;
    m_fki_ezsigntemplatepackagemembership_id_isValid = false;

    m_fki_ezsigntemplatepackagesigner_id_isSet = false;
    m_fki_ezsigntemplatepackagesigner_id_isValid = false;

    m_fki_ezsigntemplatesigner_id_isSet = false;
    m_fki_ezsigntemplatesigner_id_isValid = false;

    m_i_ezsigntemplatepackagesignermembership_copy_isSet = false;
    m_i_ezsigntemplatepackagesignermembership_copy_isValid = false;
}

void Ezsigntemplatepackagesignermembership_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepackagesignermembership_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagesignermembership_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatepackagesignermembership_id, json[QString("pkiEzsigntemplatepackagesignermembershipID")]);
    m_pki_ezsigntemplatepackagesignermembership_id_isSet = !json[QString("pkiEzsigntemplatepackagesignermembershipID")].isNull() && m_pki_ezsigntemplatepackagesignermembership_id_isValid;

    m_fki_ezsigntemplatepackagemembership_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackagemembership_id, json[QString("fkiEzsigntemplatepackagemembershipID")]);
    m_fki_ezsigntemplatepackagemembership_id_isSet = !json[QString("fkiEzsigntemplatepackagemembershipID")].isNull() && m_fki_ezsigntemplatepackagemembership_id_isValid;

    m_fki_ezsigntemplatepackagesigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackagesigner_id, json[QString("fkiEzsigntemplatepackagesignerID")]);
    m_fki_ezsigntemplatepackagesigner_id_isSet = !json[QString("fkiEzsigntemplatepackagesignerID")].isNull() && m_fki_ezsigntemplatepackagesigner_id_isValid;

    m_fki_ezsigntemplatesigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatesigner_id, json[QString("fkiEzsigntemplatesignerID")]);
    m_fki_ezsigntemplatesigner_id_isSet = !json[QString("fkiEzsigntemplatesignerID")].isNull() && m_fki_ezsigntemplatesigner_id_isValid;

    m_i_ezsigntemplatepackagesignermembership_copy_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatepackagesignermembership_copy, json[QString("iEzsigntemplatepackagesignermembershipCopy")]);
    m_i_ezsigntemplatepackagesignermembership_copy_isSet = !json[QString("iEzsigntemplatepackagesignermembershipCopy")].isNull() && m_i_ezsigntemplatepackagesignermembership_copy_isValid;
}

QString Ezsigntemplatepackagesignermembership_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepackagesignermembership_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagesignermembership_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagesignermembershipID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatepackagesignermembership_id));
    }
    if (m_fki_ezsigntemplatepackagemembership_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackagemembershipID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackagemembership_id));
    }
    if (m_fki_ezsigntemplatepackagesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackagesignerID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackagesigner_id));
    }
    if (m_fki_ezsigntemplatesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatesignerID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatesigner_id));
    }
    if (m_i_ezsigntemplatepackagesignermembership_copy_isSet) {
        obj.insert(QString("iEzsigntemplatepackagesignermembershipCopy"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatepackagesignermembership_copy));
    }
    return obj;
}

qint32 Ezsigntemplatepackagesignermembership_ResponseCompound::getPkiEzsigntemplatepackagesignermembershipId() const {
    return m_pki_ezsigntemplatepackagesignermembership_id;
}
void Ezsigntemplatepackagesignermembership_ResponseCompound::setPkiEzsigntemplatepackagesignermembershipId(const qint32 &pki_ezsigntemplatepackagesignermembership_id) {
    m_pki_ezsigntemplatepackagesignermembership_id = pki_ezsigntemplatepackagesignermembership_id;
    m_pki_ezsigntemplatepackagesignermembership_id_isSet = true;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_pki_ezsigntemplatepackagesignermembership_id_Set() const{
    return m_pki_ezsigntemplatepackagesignermembership_id_isSet;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_pki_ezsigntemplatepackagesignermembership_id_Valid() const{
    return m_pki_ezsigntemplatepackagesignermembership_id_isValid;
}

qint32 Ezsigntemplatepackagesignermembership_ResponseCompound::getFkiEzsigntemplatepackagemembershipId() const {
    return m_fki_ezsigntemplatepackagemembership_id;
}
void Ezsigntemplatepackagesignermembership_ResponseCompound::setFkiEzsigntemplatepackagemembershipId(const qint32 &fki_ezsigntemplatepackagemembership_id) {
    m_fki_ezsigntemplatepackagemembership_id = fki_ezsigntemplatepackagemembership_id;
    m_fki_ezsigntemplatepackagemembership_id_isSet = true;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_fki_ezsigntemplatepackagemembership_id_Set() const{
    return m_fki_ezsigntemplatepackagemembership_id_isSet;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_fki_ezsigntemplatepackagemembership_id_Valid() const{
    return m_fki_ezsigntemplatepackagemembership_id_isValid;
}

qint32 Ezsigntemplatepackagesignermembership_ResponseCompound::getFkiEzsigntemplatepackagesignerId() const {
    return m_fki_ezsigntemplatepackagesigner_id;
}
void Ezsigntemplatepackagesignermembership_ResponseCompound::setFkiEzsigntemplatepackagesignerId(const qint32 &fki_ezsigntemplatepackagesigner_id) {
    m_fki_ezsigntemplatepackagesigner_id = fki_ezsigntemplatepackagesigner_id;
    m_fki_ezsigntemplatepackagesigner_id_isSet = true;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_fki_ezsigntemplatepackagesigner_id_Set() const{
    return m_fki_ezsigntemplatepackagesigner_id_isSet;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_fki_ezsigntemplatepackagesigner_id_Valid() const{
    return m_fki_ezsigntemplatepackagesigner_id_isValid;
}

qint32 Ezsigntemplatepackagesignermembership_ResponseCompound::getFkiEzsigntemplatesignerId() const {
    return m_fki_ezsigntemplatesigner_id;
}
void Ezsigntemplatepackagesignermembership_ResponseCompound::setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id) {
    m_fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    m_fki_ezsigntemplatesigner_id_isSet = true;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_fki_ezsigntemplatesigner_id_Set() const{
    return m_fki_ezsigntemplatesigner_id_isSet;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_fki_ezsigntemplatesigner_id_Valid() const{
    return m_fki_ezsigntemplatesigner_id_isValid;
}

qint32 Ezsigntemplatepackagesignermembership_ResponseCompound::getIEzsigntemplatepackagesignermembershipCopy() const {
    return m_i_ezsigntemplatepackagesignermembership_copy;
}
void Ezsigntemplatepackagesignermembership_ResponseCompound::setIEzsigntemplatepackagesignermembershipCopy(const qint32 &i_ezsigntemplatepackagesignermembership_copy) {
    m_i_ezsigntemplatepackagesignermembership_copy = i_ezsigntemplatepackagesignermembership_copy;
    m_i_ezsigntemplatepackagesignermembership_copy_isSet = true;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_i_ezsigntemplatepackagesignermembership_copy_Set() const{
    return m_i_ezsigntemplatepackagesignermembership_copy_isSet;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::is_i_ezsigntemplatepackagesignermembership_copy_Valid() const{
    return m_i_ezsigntemplatepackagesignermembership_copy_isValid;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagesignermembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackagemembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackagesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatepackagesignermembership_copy_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepackagesignermembership_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackagesignermembership_id_isValid && m_fki_ezsigntemplatepackagemembership_id_isValid && m_fki_ezsigntemplatepackagesigner_id_isValid && m_fki_ezsigntemplatesigner_id_isValid && true;
}

} // namespace Ezmaxapi
