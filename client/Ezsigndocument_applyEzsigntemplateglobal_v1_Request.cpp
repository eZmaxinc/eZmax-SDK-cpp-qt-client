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

#include "Ezsigndocument_applyEzsigntemplateglobal_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_applyEzsigntemplateglobal_v1_Request::Ezsigndocument_applyEzsigntemplateglobal_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_applyEzsigntemplateglobal_v1_Request::Ezsigndocument_applyEzsigntemplateglobal_v1_Request() {
    this->initializeModel();
}

Ezsigndocument_applyEzsigntemplateglobal_v1_Request::~Ezsigndocument_applyEzsigntemplateglobal_v1_Request() {}

void Ezsigndocument_applyEzsigntemplateglobal_v1_Request::initializeModel() {

    m_fki_ezsigntemplateglobal_id_isSet = false;
    m_fki_ezsigntemplateglobal_id_isValid = false;

    m_a_s_ezsigntemplateglobalsigner_isSet = false;
    m_a_s_ezsigntemplateglobalsigner_isValid = false;

    m_a_pki_ezsignfoldersignerassociation_id_isSet = false;
    m_a_pki_ezsignfoldersignerassociation_id_isValid = false;
}

void Ezsigndocument_applyEzsigntemplateglobal_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_applyEzsigntemplateglobal_v1_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsigntemplateglobal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplateglobal_id, json[QString("fkiEzsigntemplateglobalID")]);
    m_fki_ezsigntemplateglobal_id_isSet = !json[QString("fkiEzsigntemplateglobalID")].isNull() && m_fki_ezsigntemplateglobal_id_isValid;

    m_a_s_ezsigntemplateglobalsigner_isValid = ::Ezmaxapi::fromJsonValue(m_a_s_ezsigntemplateglobalsigner, json[QString("a_sEzsigntemplateglobalsigner")]);
    m_a_s_ezsigntemplateglobalsigner_isSet = !json[QString("a_sEzsigntemplateglobalsigner")].isNull() && m_a_s_ezsigntemplateglobalsigner_isValid;

    m_a_pki_ezsignfoldersignerassociation_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_ezsignfoldersignerassociation_id, json[QString("a_pkiEzsignfoldersignerassociationID")]);
    m_a_pki_ezsignfoldersignerassociation_id_isSet = !json[QString("a_pkiEzsignfoldersignerassociationID")].isNull() && m_a_pki_ezsignfoldersignerassociation_id_isValid;
}

QString Ezsigndocument_applyEzsigntemplateglobal_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_applyEzsigntemplateglobal_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsigntemplateglobal_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateglobalID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplateglobal_id));
    }
    if (m_a_s_ezsigntemplateglobalsigner.size() > 0) {
        obj.insert(QString("a_sEzsigntemplateglobalsigner"), ::Ezmaxapi::toJsonValue(m_a_s_ezsigntemplateglobalsigner));
    }
    if (m_a_pki_ezsignfoldersignerassociation_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignfoldersignerassociationID"), ::Ezmaxapi::toJsonValue(m_a_pki_ezsignfoldersignerassociation_id));
    }
    return obj;
}

qint32 Ezsigndocument_applyEzsigntemplateglobal_v1_Request::getFkiEzsigntemplateglobalId() const {
    return m_fki_ezsigntemplateglobal_id;
}
void Ezsigndocument_applyEzsigntemplateglobal_v1_Request::setFkiEzsigntemplateglobalId(const qint32 &fki_ezsigntemplateglobal_id) {
    m_fki_ezsigntemplateglobal_id = fki_ezsigntemplateglobal_id;
    m_fki_ezsigntemplateglobal_id_isSet = true;
}

bool Ezsigndocument_applyEzsigntemplateglobal_v1_Request::is_fki_ezsigntemplateglobal_id_Set() const{
    return m_fki_ezsigntemplateglobal_id_isSet;
}

bool Ezsigndocument_applyEzsigntemplateglobal_v1_Request::is_fki_ezsigntemplateglobal_id_Valid() const{
    return m_fki_ezsigntemplateglobal_id_isValid;
}

QList<QString> Ezsigndocument_applyEzsigntemplateglobal_v1_Request::getASEzsigntemplateglobalsigner() const {
    return m_a_s_ezsigntemplateglobalsigner;
}
void Ezsigndocument_applyEzsigntemplateglobal_v1_Request::setASEzsigntemplateglobalsigner(const QList<QString> &a_s_ezsigntemplateglobalsigner) {
    m_a_s_ezsigntemplateglobalsigner = a_s_ezsigntemplateglobalsigner;
    m_a_s_ezsigntemplateglobalsigner_isSet = true;
}

bool Ezsigndocument_applyEzsigntemplateglobal_v1_Request::is_a_s_ezsigntemplateglobalsigner_Set() const{
    return m_a_s_ezsigntemplateglobalsigner_isSet;
}

bool Ezsigndocument_applyEzsigntemplateglobal_v1_Request::is_a_s_ezsigntemplateglobalsigner_Valid() const{
    return m_a_s_ezsigntemplateglobalsigner_isValid;
}

QList<qint32> Ezsigndocument_applyEzsigntemplateglobal_v1_Request::getAPkiEzsignfoldersignerassociationId() const {
    return m_a_pki_ezsignfoldersignerassociation_id;
}
void Ezsigndocument_applyEzsigntemplateglobal_v1_Request::setAPkiEzsignfoldersignerassociationId(const QList<qint32> &a_pki_ezsignfoldersignerassociation_id) {
    m_a_pki_ezsignfoldersignerassociation_id = a_pki_ezsignfoldersignerassociation_id;
    m_a_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool Ezsigndocument_applyEzsigntemplateglobal_v1_Request::is_a_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_a_pki_ezsignfoldersignerassociation_id_isSet;
}

bool Ezsigndocument_applyEzsigntemplateglobal_v1_Request::is_a_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_a_pki_ezsignfoldersignerassociation_id_isValid;
}

bool Ezsigndocument_applyEzsigntemplateglobal_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsigntemplateglobal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_s_ezsigntemplateglobalsigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_pki_ezsignfoldersignerassociation_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_applyEzsigntemplateglobal_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplateglobal_id_isValid && m_a_s_ezsigntemplateglobalsigner_isValid && m_a_pki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace Ezmaxapi
