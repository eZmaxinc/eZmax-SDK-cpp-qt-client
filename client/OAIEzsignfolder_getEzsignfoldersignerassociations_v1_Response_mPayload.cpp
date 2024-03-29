/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::~OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload() {}

void OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignfoldersignerassociation_isSet = false;
    m_a_obj_ezsignfoldersignerassociation_isValid = false;
}

void OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfoldersignerassociation_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfoldersignerassociation, json[QString("a_objEzsignfoldersignerassociation")]);
    m_a_obj_ezsignfoldersignerassociation_isSet = !json[QString("a_objEzsignfoldersignerassociation")].isNull() && m_a_obj_ezsignfoldersignerassociation_isValid;
}

QString OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignfoldersignerassociation.size() > 0) {
        obj.insert(QString("a_objEzsignfoldersignerassociation"), ::OpenAPI::toJsonValue(a_obj_ezsignfoldersignerassociation));
    }
    return obj;
}

QList<OAICustom_EzsignfoldersignerassociationActionableElement_Response> OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::getAObjEzsignfoldersignerassociation() const {
    return a_obj_ezsignfoldersignerassociation;
}
void OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::setAObjEzsignfoldersignerassociation(const QList<OAICustom_EzsignfoldersignerassociationActionableElement_Response> &a_obj_ezsignfoldersignerassociation) {
    this->a_obj_ezsignfoldersignerassociation = a_obj_ezsignfoldersignerassociation;
    this->m_a_obj_ezsignfoldersignerassociation_isSet = true;
}

bool OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::is_a_obj_ezsignfoldersignerassociation_Set() const{
    return m_a_obj_ezsignfoldersignerassociation_isSet;
}

bool OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::is_a_obj_ezsignfoldersignerassociation_Valid() const{
    return m_a_obj_ezsignfoldersignerassociation_isValid;
}

bool OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignfoldersignerassociation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfoldersignerassociation_isValid && true;
}

} // namespace OpenAPI
