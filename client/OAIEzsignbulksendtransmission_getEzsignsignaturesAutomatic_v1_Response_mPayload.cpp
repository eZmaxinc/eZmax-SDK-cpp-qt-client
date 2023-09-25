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

#include "OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::~OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload() {}

void OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::initializeModel() {

    m_a_e_ezsignsignature_type_isSet = false;
    m_a_e_ezsignsignature_type_isValid = false;

    m_a_obj_ezsignfolder_isSet = false;
    m_a_obj_ezsignfolder_isValid = false;
}

void OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_e_ezsignsignature_type_isValid = ::Ezmaxapi::fromJsonValue(m_a_e_ezsignsignature_type, json[QString("a_eEzsignsignatureType")]);
    m_a_e_ezsignsignature_type_isSet = !json[QString("a_eEzsignsignatureType")].isNull() && m_a_e_ezsignsignature_type_isValid;

    m_a_obj_ezsignfolder_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignfolder, json[QString("a_objEzsignfolder")]);
    m_a_obj_ezsignfolder_isSet = !json[QString("a_objEzsignfolder")].isNull() && m_a_obj_ezsignfolder_isValid;
}

QString OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_e_ezsignsignature_type.size() > 0) {
        obj.insert(QString("a_eEzsignsignatureType"), ::Ezmaxapi::toJsonValue(m_a_e_ezsignsignature_type));
    }
    if (m_a_obj_ezsignfolder.size() > 0) {
        obj.insert(QString("a_objEzsignfolder"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignfolder));
    }
    return obj;
}

QSet<OAIField_eEzsignsignatureType> OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::getAEEzsignsignatureType() const {
    return m_a_e_ezsignsignature_type;
}
void OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::setAEEzsignsignatureType(const QSet<OAIField_eEzsignsignatureType> &a_e_ezsignsignature_type) {
    m_a_e_ezsignsignature_type = a_e_ezsignsignature_type;
    m_a_e_ezsignsignature_type_isSet = true;
}

bool OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::is_a_e_ezsignsignature_type_Set() const{
    return m_a_e_ezsignsignature_type_isSet;
}

bool OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::is_a_e_ezsignsignature_type_Valid() const{
    return m_a_e_ezsignsignature_type_isValid;
}

QList<OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response> OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::getAObjEzsignfolder() const {
    return m_a_obj_ezsignfolder;
}
void OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::setAObjEzsignfolder(const QList<OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response> &a_obj_ezsignfolder) {
    m_a_obj_ezsignfolder = a_obj_ezsignfolder;
    m_a_obj_ezsignfolder_isSet = true;
}

bool OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::is_a_obj_ezsignfolder_Set() const{
    return m_a_obj_ezsignfolder_isSet;
}

bool OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::is_a_obj_ezsignfolder_Valid() const{
    return m_a_obj_ezsignfolder_isValid;
}

bool OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_e_ezsignsignature_type.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignfolder.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_e_ezsignsignature_type_isValid && m_a_obj_ezsignfolder_isValid && true;
}

} // namespace Ezmaxapi
