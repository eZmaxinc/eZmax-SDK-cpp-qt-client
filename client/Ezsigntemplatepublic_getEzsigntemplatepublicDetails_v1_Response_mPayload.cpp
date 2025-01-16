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

#include "Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::~Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload() {}

void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::initializeModel() {

    m_obj_branding_isSet = false;
    m_obj_branding_isValid = false;

    m_fki_userlogintype_id_isSet = false;
    m_fki_userlogintype_id_isValid = false;

    m_a_s_ezsigntemplatesigner_description_isSet = false;
    m_a_s_ezsigntemplatesigner_description_isValid = false;
}

void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_branding_isValid = ::Ezmaxapi::fromJsonValue(m_obj_branding, json[QString("objBranding")]);
    m_obj_branding_isSet = !json[QString("objBranding")].isNull() && m_obj_branding_isValid;

    m_fki_userlogintype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_userlogintype_id, json[QString("fkiUserlogintypeID")]);
    m_fki_userlogintype_id_isSet = !json[QString("fkiUserlogintypeID")].isNull() && m_fki_userlogintype_id_isValid;

    m_a_s_ezsigntemplatesigner_description_isValid = ::Ezmaxapi::fromJsonValue(m_a_s_ezsigntemplatesigner_description, json[QString("a_sEzsigntemplatesignerDescription")]);
    m_a_s_ezsigntemplatesigner_description_isSet = !json[QString("a_sEzsigntemplatesignerDescription")].isNull() && m_a_s_ezsigntemplatesigner_description_isValid;
}

QString Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_branding.isSet()) {
        obj.insert(QString("objBranding"), ::Ezmaxapi::toJsonValue(m_obj_branding));
    }
    if (m_fki_userlogintype_id_isSet) {
        obj.insert(QString("fkiUserlogintypeID"), ::Ezmaxapi::toJsonValue(m_fki_userlogintype_id));
    }
    if (m_a_s_ezsigntemplatesigner_description.size() > 0) {
        obj.insert(QString("a_sEzsigntemplatesignerDescription"), ::Ezmaxapi::toJsonValue(m_a_s_ezsigntemplatesigner_description));
    }
    return obj;
}

Custom_Branding_Response Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::getObjBranding() const {
    return m_obj_branding;
}
void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::setObjBranding(const Custom_Branding_Response &obj_branding) {
    m_obj_branding = obj_branding;
    m_obj_branding_isSet = true;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::is_obj_branding_Set() const{
    return m_obj_branding_isSet;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::is_obj_branding_Valid() const{
    return m_obj_branding_isValid;
}

qint32 Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::getFkiUserlogintypeId() const {
    return m_fki_userlogintype_id;
}
void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::setFkiUserlogintypeId(const qint32 &fki_userlogintype_id) {
    m_fki_userlogintype_id = fki_userlogintype_id;
    m_fki_userlogintype_id_isSet = true;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::is_fki_userlogintype_id_Set() const{
    return m_fki_userlogintype_id_isSet;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::is_fki_userlogintype_id_Valid() const{
    return m_fki_userlogintype_id_isValid;
}

QList<QString> Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::getASEzsigntemplatesignerDescription() const {
    return m_a_s_ezsigntemplatesigner_description;
}
void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::setASEzsigntemplatesignerDescription(const QList<QString> &a_s_ezsigntemplatesigner_description) {
    m_a_s_ezsigntemplatesigner_description = a_s_ezsigntemplatesigner_description;
    m_a_s_ezsigntemplatesigner_description_isSet = true;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::is_a_s_ezsigntemplatesigner_description_Set() const{
    return m_a_s_ezsigntemplatesigner_description_isSet;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::is_a_s_ezsigntemplatesigner_description_Valid() const{
    return m_a_s_ezsigntemplatesigner_description_isValid;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_branding.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_userlogintype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_s_ezsigntemplatesigner_description.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_userlogintype_id_isValid && m_a_s_ezsigntemplatesigner_description_isValid && true;
}

} // namespace Ezmaxapi
