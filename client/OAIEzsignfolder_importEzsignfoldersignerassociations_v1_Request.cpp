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

#include "OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request() {
    this->initializeModel();
}

OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::~OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request() {}

void OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::initializeModel() {

    m_a_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_a_fki_ezsignfoldersignerassociation_id_isValid = false;
}

void OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_fki_ezsignfoldersignerassociation_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_fki_ezsignfoldersignerassociation_id, json[QString("a_fkiEzsignfoldersignerassociationID")]);
    m_a_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("a_fkiEzsignfoldersignerassociationID")].isNull() && m_a_fki_ezsignfoldersignerassociation_id_isValid;
}

QString OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_fki_ezsignfoldersignerassociation_id.size() > 0) {
        obj.insert(QString("a_fkiEzsignfoldersignerassociationID"), ::Ezmaxapi::toJsonValue(m_a_fki_ezsignfoldersignerassociation_id));
    }
    return obj;
}

QSet<qint32> OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::getAFkiEzsignfoldersignerassociationId() const {
    return m_a_fki_ezsignfoldersignerassociation_id;
}
void OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::setAFkiEzsignfoldersignerassociationId(const QSet<qint32> &a_fki_ezsignfoldersignerassociation_id) {
    m_a_fki_ezsignfoldersignerassociation_id = a_fki_ezsignfoldersignerassociation_id;
    m_a_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::is_a_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_a_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::is_a_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_a_fki_ezsignfoldersignerassociation_id_isValid;
}

bool OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_fki_ezsignfoldersignerassociation_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_fki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace Ezmaxapi
